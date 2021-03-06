/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying> {

	NSMutableArray* _messages;

}

@property (nonatomic,retain) NSMutableArray * messages;              //@synthesize messages=_messages - In the implementation block
-(void)setMessages:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)messagesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)messagesCount;
-(void)clearMessages;
-(NSMutableArray *)messages;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)addMessages:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

