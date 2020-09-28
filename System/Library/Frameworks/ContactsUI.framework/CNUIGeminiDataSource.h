/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNGeminiManagerDelegate.h>

@protocol CNUIGeminiDataSourceDelegate;
@class CNContact, CNGeminiResult, CNGeminiManager, NSString;

@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate> {

	CNContact* _contact;
	CNGeminiResult* _geminiResult;
	id<CNUIGeminiDataSourceDelegate> _delegate;
	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;                               //@synthesize geminiManager=_geminiManager - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                                 //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * channelIdentifier; 
@property (assign,nonatomic,__weak) id<CNUIGeminiDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNGeminiManager *)geminiManager;
-(NSString *)channelIdentifier;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(CNContact *)contact;
-(void)setDelegate:(id<CNUIGeminiDataSourceDelegate>)arg1 ;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(void)resetDataSource;
-(void)channelsDidChangeForGeminiManager:(id)arg1 ;
-(id)initWithGeminiManager:(id)arg1 ;
-(id<CNUIGeminiDataSourceDelegate>)delegate;
-(void)setContact:(CNContact *)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(CNGeminiResult *)geminiResult;
@end
