/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) NSArray * events; 
@property (nonatomic,readonly) unsigned long long timelineType; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) double refreshInterval; 
-(NSArray *)events;
-(double)refreshInterval;
-(IKTextElement *)title;
-(NSURL *)url;
-(unsigned long long)timelineType;
@end

