/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject {

	BOOL _prepared;
	NSAttributedString* _attributedString;
	CGContextRef _context;
	const CTFramesetterRef _framesetter;
	NSShadow* _shadow;

}

@property (nonatomic,readonly) const CTFramesetterRef framesetter;                      //@synthesize framesetter=_framesetter - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                       //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                                    //@synthesize context=_context - In the implementation block
-(NSShadow *)shadow;
-(NSAttributedString *)attributedString;
-(const CTFramesetterRef)framesetter;
-(void)dealloc;
-(void)prepare;
-(id)initWithAttributedString:(id)arg1 context:(CGContextRef)arg2 ;
-(id)init;
-(id)frameWithRect:(CGRect)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3 ;
-(CGContextRef)context;
@end

