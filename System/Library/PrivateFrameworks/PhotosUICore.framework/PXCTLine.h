/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, PXCTFrame, NSAttributedString, NSShadow;

@interface PXCTLine : NSObject {

	BOOL _prepared;
	double _width;
	CGRect _imageBounds;
	BOOL _truncated;
	BOOL _endOfString;
	NSString* _string;
	const CTLineRef _line;
	PXCTFrame* _frame;
	NSAttributedString* _referenceAttributedString;
	double _ascent;
	double _descent;
	CGContextRef _context;
	NSShadow* _shadow;
	NSRange _stringRange;
	CGPoint _origin;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) const CTLineRef line;                                        //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) CGPoint origin;                                              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,__weak,readonly) PXCTFrame * frame;                                    //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) NSAttributedString * referenceAttributedString;              //@synthesize referenceAttributedString=_referenceAttributedString - In the implementation block
@property (nonatomic,readonly) double ascent;                                               //@synthesize ascent=_ascent - In the implementation block
@property (nonatomic,readonly) double descent;                                              //@synthesize descent=_descent - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                           //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,readonly) NSRange stringRange;                                         //@synthesize stringRange=_stringRange - In the implementation block
@property (nonatomic,readonly) NSString * string;                                           //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double ascentPosition; 
@property (nonatomic,readonly) double baselinePosition; 
@property (nonatomic,readonly) double descentPosition; 
@property (nonatomic,readonly) CGPoint textPosition; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CGRect imageBounds; 
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated;                           //@synthesize truncated=_truncated - In the implementation block
@property (getter=isEndOfString,nonatomic,readonly) BOOL endOfString;                       //@synthesize endOfString=_endOfString - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform;                                 //@synthesize transform=_transform - In the implementation block
-(const CTLineRef)line;
-(NSShadow *)shadow;
-(NSString *)string;
-(void)translateVerticallyBy:(double)arg1 ;
-(double)ascent;
-(void)draw;
-(double)width;
-(NSAttributedString *)referenceAttributedString;
-(void)dealloc;
-(CGPoint)textPosition;
-(void)prepare;
-(NSRange)stringRange;
-(double)descentPosition;
-(BOOL)isEndOfString;
-(CGRect)contentBounds;
-(CGPoint)origin;
-(id)init;
-(PXCTFrame *)frame;
-(void)translateHorizontallyBy:(double)arg1 ;
-(CGRect)imageBounds;
-(CGContextRef)context;
-(double)baselinePosition;
-(void)scaleVerticallyBy:(double)arg1 ;
-(id)initWithLine:(CTLineRef)arg1 origin:(CGPoint)arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(BOOL)arg5 ;
-(CGAffineTransform)transform;
-(const CGPathRef)createPath;
-(void)scaleBy:(double)arg1 ;
-(void)_transformBy:(CGAffineTransform)arg1 ;
-(id)description;
-(double)descent;
-(BOOL)isTruncated;
-(double)ascentPosition;
@end

