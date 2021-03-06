/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SFUCryptoKey, NSArray;


@protocol TSPCryptoInfo <NSObject>
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) BOOL hasDecodedLength; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
@required
-(unsigned long long)preferredBlockSize;
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(NSArray *)blockInfos;
-(id)mutableCryptoInfoCopy;
-(BOOL)hasDecodedLength;

@end

