/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class FBMainDisplayLayoutPublisher, NSString;

@interface FBDisplayLayoutTransition : NSObject {

	FBMainDisplayLayoutPublisher* _publisher;
	NSString* _name;
	NSString* _transitionReason;
	long long _displayType;
	id<BSInvalidatable> _transition;
	long long _interfaceOrientation;
	long long _backlightLevel;

}

@property (nonatomic,readonly) long long displayType;                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,copy) NSString * transitionReason;                                //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long backlightLevel;                                 //@synthesize backlightLevel=_backlightLevel - In the implementation block
+(void)flushLayoutForDisplayType:(long long)arg1 ;
+(id)layoutForDisplayType:(long long)arg1 ;
-(long long)backlightLevel;
-(long long)interfaceOrientation;
-(NSString *)transitionReason;
-(void)setBacklightLevel:(long long)arg1 ;
-(BOOL)isTransitioning;
-(void)beginTransition;
-(void)setTransitionReason:(NSString *)arg1 ;
-(void)dealloc;
-(long long)displayType;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(id)initWithDisplayType:(long long)arg1 name:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)endTransition;
@end

