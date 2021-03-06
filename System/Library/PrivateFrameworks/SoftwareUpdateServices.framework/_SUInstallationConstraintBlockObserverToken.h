/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUInvalidatable.h>

@class SUInstallationConstraintObserver, NSString;

@interface _SUInstallationConstraintBlockObserverToken : NSObject <SUInvalidatable> {

	SUInstallationConstraintObserver* _observer;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObserver:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

