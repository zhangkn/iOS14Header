/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFDocumentPageChangeDelegate <NSObject>
@optional
-(void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
-(void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;

@end
