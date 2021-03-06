/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFViewLayoutPrivate, PDFDocument;

@interface PDFViewLayout : NSObject {

	PDFViewLayoutPrivate* _private;

}

@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic,__weak) PDFDocument * document; 
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(PDFDocument *)document;
-(void)setDocument:(PDFDocument *)arg1 ;
-(CGRect)boundsForPage:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGSize)contentSizeWithCurrentPage:(id)arg1 ;
-(long long)functionalDisplayMode;
-(id)facingPageForPage:(id)arg1 ;
-(void)invalidateInternalDocumentGeometry;
-(void)generateInternalDocumentGeometry;
-(id)pageNearestPoint:(CGPoint)arg1 currentPage:(id)arg2 ;
-(NSRange)visiblePageRangeInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(id)visiblePagesInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
@end

