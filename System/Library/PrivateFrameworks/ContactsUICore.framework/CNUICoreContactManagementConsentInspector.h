/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUICoreContactManagementConsentCheck.h>

@protocol CNSchedulerProvider;
@class STManagementState, NSString;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck> {

	STManagementState* _managementState;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) STManagementState * managementState;                    //@synthesize managementState=_managementState - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1 ;
-(STManagementState *)managementState;
-(id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactManagementConsentStateFutureForDSID:(id)arg1 ;
@end

