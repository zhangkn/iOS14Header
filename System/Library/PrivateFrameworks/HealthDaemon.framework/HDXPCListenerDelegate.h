/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDXPCListenerDelegate <NSObject>
@optional
-(void)connectionInvalidatedForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;

@required
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;

@end

