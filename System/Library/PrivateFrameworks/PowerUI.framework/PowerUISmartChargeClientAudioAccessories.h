/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISmartChargeClientManagingAudioAccessories.h>

@protocol OS_os_log;
@class NSString, NSXPCConnection, NSObject;

@interface PowerUISmartChargeClientAudioAccessories : NSObject <PowerUISmartChargeClientManagingAudioAccessories> {

	NSString* _clientName;
	NSXPCConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSString * clientName;                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                  //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteInterface;
-(void)stopMockingBluetooth;
-(void)setFakeConnectionStatusTo:(BOOL)arg1 ;
-(void)clearLastActionForDevice:(id)arg1 ;
-(void)startMockingBluetoothForFakeDevice:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(void)fakeConnectionForDevice:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithClientName:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 forDevice:(id)arg2 withError:(id*)arg3 ;
-(void)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withError:(id*)arg2 ;
-(BOOL)disableSmartChargingForDevice:(id)arg1 withError:(id*)arg2 ;
-(void)disableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)temporarilyDisableSmartChargingForDevice:(id)arg1 withError:(id*)arg2 ;
-(void)temporarilyDisableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)enableSmartChargingForDevice:(id)arg1 withError:(id*)arg2 ;
-(void)enableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)temporarilyEnableChargingForDevice:(id)arg1 withError:(id*)arg2 ;
-(void)temporarilyEnableChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)fullChargeDeadlineForDevice:(id)arg1 withError:(id*)arg2 ;
-(id)unfilteredDeadlineForDevice:(id)arg1 withError:(id*)arg2 ;
-(BOOL)connectAndDisableOBCforDevice:(id)arg1 withError:(id*)arg2 ;
-(void)connectAndDisableOBCforDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withError:(id*)arg3 ;
-(void)engageUntil:(id)arg1 forDevice:(id)arg2 overrideAllSignals:(BOOL)arg3 ;
-(id)getAvailableDevices;
-(id)getStatusForDevice:(id)arg1 ;
-(unsigned long long)lastActionForDevice:(id)arg1 ;
-(void)deleteRecordsForDevice:(id)arg1 ;
@end
