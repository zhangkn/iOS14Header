/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSURL;

@interface FCCoverArtImage : NSObject {

	NSURL* _URL;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(id)initWithDimensions:(CGSize)arg1 URL:(id)arg2 ;
-(CGSize)dimensions;
@end

