/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHPerson, PHFace, PHAsset;

@interface PXPeopleFaceTile : NSObject {

	PHPerson* _person;
	PHFace* _face;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) PHFace * face;                  //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (readonly) BOOL isUserDefined; 
-(PHPerson *)person;
-(PHAsset *)asset;
-(BOOL)isUserDefined;
-(id)initWithFace:(id)arg1 asset:(id)arg2 person:(id)arg3 ;
-(PHFace *)face;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end
