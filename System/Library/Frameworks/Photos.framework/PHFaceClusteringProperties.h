/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint, NSString;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;
	NSString* _groupingIdentifier;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;              //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathToPrimaryObject;
+(id)keyPathFromPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)groupingIdentifier;
-(PHFaceprint *)faceprint;
@end

