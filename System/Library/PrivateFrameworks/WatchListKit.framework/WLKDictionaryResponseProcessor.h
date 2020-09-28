/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject {

	NSString* _dictionaryKeyPath;
	Class _objectClass;

}

@property (nonatomic,copy) NSString * dictionaryKeyPath;              //@synthesize dictionaryKeyPath=_dictionaryKeyPath - In the implementation block
@property (nonatomic,retain) Class objectClass;                       //@synthesize objectClass=_objectClass - In the implementation block
-(void)setObjectClass:(Class)arg1 ;
-(Class)objectClass;
-(id)processResponseData:(id)arg1 error:(id*)arg2 ;
-(id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)dictionaryKeyPath;
-(void)setDictionaryKeyPath:(NSString *)arg1 ;
@end
