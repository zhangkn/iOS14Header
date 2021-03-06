/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUPickerFilter;
@interface PHPickerFilter : NSObject <NSCopying> {

	id<PUPickerFilter> __puPickerFilter;

}

@property (nonatomic,readonly) id<PUPickerFilter> _puPickerFilter;              //@synthesize _puPickerFilter=__puPickerFilter - In the implementation block
+(id)imagesFilter;
+(id)videosFilter;
+(id)livePhotosFilter;
+(id)anyFilterMatchingSubfilters:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PUPickerFilter>)_puPickerFilter;
-(id)_initWithPUPickerFilter:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

