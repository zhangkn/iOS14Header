/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log, _CDContext;
@class NSObject, _CDContextualChangeRegistration, NSString;

@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor> {

	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;
	id<_CDContext> _context;
	_CDContextualChangeRegistration* _registration;

}

@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDContext> context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualChangeRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(unsigned long long)signalID;
-(NSObject*<OS_os_log>)log;
-(_CDContextualChangeRegistration *)registration;
-(void)stopMonitoring;
-(void)setContext:(id<_CDContext>)arg1 ;
-(id)requiredFullChargeDate;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<_CDContext>)context;
-(void)startMonitoring;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setRegistration:(_CDContextualChangeRegistration *)arg1 ;
-(id)nextUserVisibleWakeDate;
@end
