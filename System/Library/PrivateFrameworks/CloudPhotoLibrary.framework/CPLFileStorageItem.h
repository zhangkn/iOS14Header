/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {

	BOOL _original;
	BOOL _markedForDelete;
	CPLResourceIdentity* _identity;
	NSDate* _lastAccessDate;

}

@property (nonatomic,readonly) CPLResourceIdentity * identity;                             //@synthesize identity=_identity - In the implementation block
@property (getter=isOriginal,nonatomic,readonly) BOOL original;                            //@synthesize original=_original - In the implementation block
@property (getter=isMarkedForDelete,nonatomic,readonly) BOOL markedForDelete;              //@synthesize markedForDelete=_markedForDelete - In the implementation block
@property (nonatomic,readonly) NSDate * lastAccessDate;                                    //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOriginal;
-(NSDate *)lastAccessDate;
-(BOOL)isEqual:(id)arg1 ;
-(CPLResourceIdentity *)identity;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isMarkedForDelete;
-(id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4 ;
@end
