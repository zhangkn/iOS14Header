/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol NFNdefRecord <NSObject>
@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@required
-(NSData *)identifier;
-(unsigned char)header;
-(NSData *)payload;
-(void)setHeader:(unsigned char)arg1;
-(void)setIdentifier:(id)arg1;
-(unsigned char)typeNameFormat;
-(id)decode;
-(NSData *)type;
-(BOOL)chunked;
-(void)setType:(id)arg1;
-(void)setPayload:(id)arg1;
-(id)asData;
-(id)initWithNDEFRecord:(id)arg1;
-(void)setTypeNameFormat:(unsigned char)arg1;
-(void)setShortRecord:(BOOL)arg1;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1;
-(void)setMessageEnd:(BOOL)arg1;
-(void)setChunked:(BOOL)arg1;

@end

