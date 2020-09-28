/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIAssertionControllerSubject;
@class NSMutableDictionary;

@interface _UIAssertionController : NSObject {

	NSMutableDictionary* _activeAssertionRecords;
	id<_UIAssertionControllerSubject> _subject;

}

@property (nonatomic,__weak,readonly) id<_UIAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(void)_endTrackingAssertion:(id)arg1 ;
-(id<_UIAssertionControllerSubject>)subject;
-(id)debugDescription;
-(id)initWithAssertionSubject:(id)arg1 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3 ;
-(void)_enforceSubjectAwarenessOfAssertionState:(BOOL)arg1 forAssertionType:(unsigned long long)arg2 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 ;
-(void)_beginTrackingAssertion:(id)arg1 ;
@end
