/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFWeakObject : HMFObject {

	id _object;
	unsigned long long _objectHash;

}

@property (nonatomic,readonly) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
@property (__weak,readonly) id object;                                     //@synthesize object=_object - In the implementation block
-(id)initWithWeakObject:(id)arg1 ;
-(id)init;
-(unsigned long long)objectHash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end

