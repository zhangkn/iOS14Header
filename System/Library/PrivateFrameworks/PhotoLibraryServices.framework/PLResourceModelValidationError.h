/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface PLResourceModelValidationError : NSError
+(id)missingRequiredResourcesErrorForAsset:(id)arg1 message:(id)arg2 ;
+(id)duplicateResourceErrorAmongResources:(id)arg1 forAsset:(id)arg2 ;
+(id)duplicatedCPLTypeAssetErrorForAsset:(id)arg1 cplType:(unsigned long long)arg2 ;
+(id)malformedKeyErrorForKey:(id)arg1 resource:(id)arg2 ;
+(id)malformedTableThumbnailKeyErrorForKey:(id)arg1 assetID:(id)arg2 ;
+(id)unreachableKeyErrorForKey:(id)arg1 atURL:(id)arg2 resource:(id)arg3 ;
+(id)unreachableTableThumbnailErrorForKey:(id)arg1 assetID:(id)arg2 ;
+(id)unreachableFileThumbnailErrorForKey:(id)arg1 assetID:(id)arg2 ;
+(id)allPossibleErrorCodes;
+(id)unexpectedLocalResourceError:(id)arg1 ;
+(id)localAvailabilityInconsistencyErrorForResource:(id)arg1 ;
-(id)init;
-(id)description;
@end

