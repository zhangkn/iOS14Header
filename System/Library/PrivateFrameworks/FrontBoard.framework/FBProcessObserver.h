/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBProcessObserver.h>

@protocol FBProcessObserver <NSObject>
@optional
-(void)processDidExit:(id)arg1;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;

@end

#import <libobjc.A.dylib/FBApplicationProcessObserver.h>

@protocol FBProcessObserver;
@class NSString;

@interface FBProcessObserver : NSObject <FBProcessObserver, FBApplicationProcessObserver> {

	id<FBProcessObserver> _observer;
	unsigned long long _observerAddress;
	Class _observerClass;
	BOOL _supportsDidExit;
	BOOL _supportsStateDidChange;
	BOOL _supportsApplicationDidExit;
	BOOL _supportsApplicationWillLaunch;
	BOOL _supportsApplicationDidLaunch;
	BOOL _supportsApplicationDebugState;
	int _invalidated;
	int _calledDidExit;
	int _calledWillLaunch;
	int _calledDidLaunch;

}

@property (nonatomic,__weak,readonly) id<FBProcessObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationProcessDebuggingStateDidChange:(id)arg1 ;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(id)initWithObserver:(id)arg1 ;
-(void)invalidate;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(void)applicationProcessDidLaunch:(id)arg1 ;
-(void)processDidExit:(id)arg1 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<FBProcessObserver>)observer;
-(unsigned long long)hash;
@end
