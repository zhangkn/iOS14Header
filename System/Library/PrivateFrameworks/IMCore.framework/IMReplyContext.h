/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMReplyContext
@property (nonatomic,readonly) BOOL replyIsFromMe; 
@property (nonatomic,copy,readonly) NSString * replyMessageGUID; 
@required
-(NSString *)replyMessageGUID;
-(BOOL)replyIsFromMe;

@end
