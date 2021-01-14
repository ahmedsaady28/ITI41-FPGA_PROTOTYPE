LIBRARY ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;
--use ieee.numeric_bit.all;
entity door_lock_final is
port  (
	clk    : in	std_logic;
	code  : in	std_logic_vector (19 downto 0) ;
	reset : in	std_logic;
        --timeout : in	std_logic;
        alarm  : out	std_logic;
        --daytime : in    std_logic ;
	door    : out	std_logic
      );
end door_lock_final ;

architecture MEALY of door_lock_final  is
component sine_top
	    Port ( freq_1 : in  STD_LOGIC_VECTOR (7 downto 0);
           freq_2 : in  STD_LOGIC_VECTOR (7 downto 0);
           freq_sys : in  STD_LOGIC_VECTOR (7 downto 0);
			  n_waves  : in std_logic_vector (4 downto 0) := (1=>'1',others=>'0');
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
				en : in std_logic;
           final_out : out  STD_LOGIC_VECTOR (8 downto 0));
end component;
signal  f1_sig,f2_sig,f_sys : std_logic_vector(7 downto 0) ;
signal  n_waves_sig : std_logic_vector (4 downto 0);
signal  out_wave : std_logic_vector (8 downto 0);
signal  en : std_logic_vector;

begin
sirine : sine_top
		port map (freq_1 =>f1_sig,
			freq_2 => f2_sig,
			freq_sys =>f_sys,
			clk=>clk,
			rst=>reset,
			en=>en,
			n_waves=>n_waves_sig,
			final_out=>out_wave);
  P1 :process (clk)
	constant f1_w : integer := 5;
	constant f2_w : integer := 1;
	constant f_c : integer := 30;
	constant f_s : integer := 100;
	constant n_c : integer := 2;
	constant n_w : integer := 3;
	variable out_w : int;
  begin  
	if rising_edge(clk) then 
	if (reset ='0')then 
                door<='0';
                alarm <='0';
		en<='0';
          elsif (code=X"28b04") then 
        	f1_sig<=std_logic_vector(to_unsigned(f_c,8));
		f2_sig<=std_logic_vector(to_unsigned(f_c,8));
		f_sys<=std_logic_vector(to_unsigned(f_s,8));
		n_waves_sig<=std_logic_vector(to_unsigned(n_c,5));
		
		en<='1';
                door <='1';
                alarm <='0';

          elsif code= X"000b"then 
           alarm <='0';
               door <='0';
                            	f1_sig<=std_logic_vector(to_unsigned(0,8));
		f2_sig<=std_logic_vector(to_unsigned(0,8));
		f_sys<=std_logic_vector(to_unsigned(0,8));
		n_waves_sig<=std_logic_vector(to_unsigned(1,5));
		
          else         
	  door <='0'; 
          alarm <='1';
        	f1_sig<=std_logic_vector(to_unsigned(f_w,8));
		f2_sig<=std_logic_vector(to_unsigned(f_w,8));
		f_sys<=std_logic_vector(to_unsigned(f_w,8));
		n_waves_sig<=std_logic_vector(to_unsigned(n_w,5));
            --NS <= S0;
		
          end if;


       
end if;

 end process P1;
end MEALY;
