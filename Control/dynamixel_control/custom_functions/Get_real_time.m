% Created by Valeria Skvo

function [dt,t_init]=Get_real_time(IDs,t_init)
global ADDR_REALTIME_TIC MAX_TIME
global port_num PROTOCOL_VERSION

t_now=double(read2ByteTxRx(port_num, PROTOCOL_VERSION, IDs(1), ADDR_REALTIME_TIC))*10^-3;
dt=mod(MAX_TIME+t_now-t_init,MAX_TIME);
t_init=t_now;
end