/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject {

	BOOL _feedbackActivated;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL feedbackActivated;                                      //@synthesize feedbackActivated=_feedbackActivated - In the implementation block
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)init;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)actuateFeedback:(long long)arg1 ;
-(void)prepareUsingFeedback:(long long)arg1 ;
-(void)endUsingFeedback:(long long)arg1 ;
-(id)_stateForFeedback:(long long)arg1 ;
-(BOOL)feedbackActivated;
-(void)setFeedbackActivated:(BOOL)arg1 ;
@end
