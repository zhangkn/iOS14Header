/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowQueryTuple : HMFObject {

	unsigned long long _queryRow;
	NSData* _queryData;

}

@property (nonatomic,readonly) unsigned long long queryRow;              //@synthesize queryRow=_queryRow - In the implementation block
@property (nonatomic,readonly) NSData * queryData;                       //@synthesize queryData=_queryData - In the implementation block
-(id)initWithQueryRow:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)queryRow;
-(NSData *)queryData;
@end
