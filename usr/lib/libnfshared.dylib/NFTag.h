/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol NFTag <NSObject>
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) unsigned technology; 
@property (nonatomic,copy,readonly) NSData * tagID; 
@property (nonatomic,copy,readonly) NSData * UID; 
@property (nonatomic,readonly) unsigned ndefAvailability; 
@property (nonatomic,readonly) unsigned long long ndefMessageSize; 
@property (nonatomic,readonly) unsigned long long ndefContainerSize; 
@property (nonatomic,copy,readonly) NSData * AppData; 
@property (nonatomic,readonly) id<NFTagA> tagA; 
@property (nonatomic,readonly) id<NFTagB> tagB; 
@property (nonatomic,readonly) id<NFTagF> tagF; 
@required
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;
-(NSData *)AppData;
-(BOOL)isEqualToNFTag:(id)arg1;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(NSData *)tagID;
-(unsigned)type;
-(id)initWithNFTag:(id)arg1;
-(NSData *)UID;
-(unsigned)technology;
-(id)description;

@end

