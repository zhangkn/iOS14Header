/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <PagesQuicklook/TPRenderingExporter.h>
#import <libobjc.A.dylib/TSKImageExporter.h>

@class TSUProgress, NSString;

@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>

@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) BOOL scaleToFit; 
@property (nonatomic,readonly) CGRect boundsRect; 
@property (nonatomic,readonly) CGRect unscaledClipRect; 
@property (nonatomic,readonly) double progressForCurrentPage; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (assign,nonatomic) BOOL paginate; 
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) TSUProgress * progress; 
@property (nonatomic,readonly) BOOL needsSupplementalFiles; 
@property (nonatomic,copy) NSString * typeUTI; 
@property (nonatomic,readonly) NSString * savePanelMessage; 
@property (nonatomic,readonly) NSString * documentSpecificTypeUTI; 
@property (nonatomic,readonly) BOOL isExportSupported; 
@property (nonatomic,readonly) BOOL canExportInBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(id)p_renderingExporterDelegate;
@end

