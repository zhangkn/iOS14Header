/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io;
@class QLPreviewParts, NSDictionary, NSObject, NSURL, NSString, NSURLRequest, NSURLResponse;

@interface QLPreviewConverter : NSObject {

	QLPreviewParts* _previewParts;
	NSDictionary* _options;
	NSObject*<OS_dispatch_io> _io_write;
	NSURL* _tmpFileURL;
	long long _totalWrittenBytes;
	BOOL _dataPhaseFinished;
	BOOL _dataGatheringSucceeded;

}

@property (nonatomic,readonly) NSString * previewFileName; 
@property (nonatomic,readonly) NSString * previewUTI; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) QLPreviewParts * previewParts; 
+(id)_lpdfUTIs;
+(id)_officeMIMETypes;
+(id)_iWorkMIMETypes;
+(id)_rtfMIMETypes;
+(id)_csvMIMETypes;
+(id)_spreadSheetMIMETypes;
+(id)_officeUTIs;
+(id)_spreadSheetUTIs;
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(id)convertibleMIMETypes;
+(id)convertibleUTIs;
+(BOOL)isOfficeDocumentType:(id)arg1 ;
+(BOOL)isCSVDocumentType:(id)arg1 ;
+(BOOL)isLPDFDocumentType:(id)arg1 ;
+(BOOL)isRTFDocumentType:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
+(id)_iWorkUTIs;
+(id)_rtfUTIs;
+(id)_csvUTIs;
+(BOOL)isIWorkDocumentType:(id)arg1 ;
+(BOOL)isSpreadSheetDocumentType:(id)arg1 ;
-(void)cancel;
-(NSString *)previewUTI;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4 ;
-(id)safeRequestForRequest:(id)arg1 ;
-(NSURLResponse *)previewResponse;
-(NSString *)previewFileName;
-(void)finishedAppendingData;
-(void)finishConverting;
-(NSURLRequest *)previewRequest;
-(id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4 ;
-(void)appendData:(id)arg1 ;
-(void)dealloc;
-(void)_closeIOCahnnel;
-(BOOL)isComputed;
-(void)appendDataArray:(id)arg1 ;
-(void)_writeDataArrayIntoStream:(id)arg1 ;
-(void)_createDispatchIOChannel;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
-(QLPreviewParts *)previewParts;
-(BOOL)isCancelled;
-(void)_register;
@end
