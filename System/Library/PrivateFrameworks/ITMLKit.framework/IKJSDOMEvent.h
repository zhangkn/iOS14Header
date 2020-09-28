/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKDOMNode, NSDate;


@protocol IKJSDOMEvent <JSExport>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) long long eventPhase; 
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) BOOL defaultPrevented; 
@required
-(NSDate *)timeStamp;
-(BOOL)bubbles;
-(NSString *)type;
-(void)preventDefault;
-(void)stopPropagation;
-(IKDOMNode *)target;
-(BOOL)cancelable;
-(IKDOMNode *)currentTarget;
-(long long)eventPhase;
-(BOOL)defaultPrevented;
-(void)stopImmediatePropagation;
-(id)initWithType:(id)arg1 eventInit:(id)arg2;

@end
