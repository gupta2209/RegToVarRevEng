-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity check_imem_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 44
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of check_imem_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10001111101001000000000000000000", 
    1 => "00100111101001010000000000000100", 
    2 => "00100100101001100000000000000100", 
    3 => "00000000000001000001000010000000", 
    4 => "00000000110000100011000000100001", 
    5 => "00001100000100000000000000010110", 
    6 => "00000000000000000000000000000000", 
    7 => "00110100000000100000000000001010", 
    8 => "00000000000000000000000000001100", 
    9 => "00111100000000010001000000000001", 
    10 => "00110100001010000000000000000000", 
    11 => "00000000000001000100100010000000", 
    12 => "00000001000010010100100000100001", 
    13 => "10001101001010100000000000000000", 
    14 => "00000000000001010101100010000000", 
    15 => "00000001000010110101100000100001", 
    16 => "10001101011011000000000000000000", 
    17 => "00000001100010100110100000101010", 
    18 => "00010001101000000000000000000011", 
    19 => "10101101001011000000000000000000", 
    20 => "10101101011010100000000000000000", 
    21 => "00000011111000000000000000001000", 
    22 => "00100111101111011111111111110100", 
    23 => "10101111101111110000000000001000", 
    24 => "10101111101100010000000000000100", 
    25 => "10101111101100000000000000000000", 
    26 => "00100100000100000000000000000000", 
    27 => "00101010000010000000000000001000", 
    28 => "00010001000000000000000000001011", 
    29 => "00100110000100010000000000000001", 
    30 => "00101010001010000000000000001000", 
    31 => "00010001000000000000000000000110", 
    32 => "00100110000001000000000000000000", 
    33 => "00100110001001010000000000000000", 
    34 => "00001100000100000000000000001001", 
    35 => "00100110001100010000000000000001", 
    36 => "00001000000100000000000000011110", 
    37 => "00100110000100000000000000000001", 
    38 => "00001000000100000000000000011011", 
    39 => "10001111101111110000000000001000", 
    40 => "10001111101100010000000000000100", 
    41 => "10001111101100000000000000000000", 
    42 => "00100111101111010000000000001100", 
    43 => "00000011111000000000000000001000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity check_imem is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 44;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of check_imem is
    component check_imem_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    check_imem_rom_U :  component check_imem_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


