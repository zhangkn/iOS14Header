/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface VUICollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _heterogeneous;

}

@property (assign,getter=isHeterogeneous,nonatomic) BOOL heterogeneous;              //@synthesize heterogeneous=_heterogeneous - In the implementation block
-(long long)developmentLayoutDirection;
-(id)init;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)isHeterogeneous;
-(double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2 ;
-(void)setHeterogeneous:(BOOL)arg1 ;
@end
