/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@protocol SFPrintPageRendererDelegate;
@class NSNumberFormatter, NSString, UIFont, UIColor, UIPrintFormatter;

@interface SFPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {

	NSNumberFormatter* _numberFormatter;
	double _URLWidth;
	NSString* _dateString;
	double _dateWidth;
	double _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	BOOL _printFooter;
	NSString* _URLString;
	UIPrintFormatter* _contentFormatter;
	id<SFPrintPageRendererDelegate> _delegate;

}

@property (nonatomic,retain) NSString * URLString;                                         //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * contentFormatter;                          //@synthesize contentFormatter=_contentFormatter - In the implementation block
@property (assign,nonatomic) BOOL printFooter;                                             //@synthesize printFooter=_printFooter - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrintPageRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)URLString;
-(void)printInteractionControllerWillStartJob:(id)arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg1 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(id)init;
-(void)setDelegate:(id<SFPrintPageRendererDelegate>)arg1 ;
-(BOOL)printFooter;
-(void)setContentFormatter:(UIPrintFormatter *)arg1 ;
-(UIPrintFormatter *)contentFormatter;
-(void)setPrintFooter:(BOOL)arg1 ;
-(id<SFPrintPageRendererDelegate>)delegate;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
@end
