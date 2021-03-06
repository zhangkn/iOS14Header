/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>

@protocol CNContactDataSourceDelegate;
@class NSString;

@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate> {

	id<CNContactDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactDataSourceDidChange:(id)arg1 ;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<CNContactDataSourceDelegate>)delegate;
@end

