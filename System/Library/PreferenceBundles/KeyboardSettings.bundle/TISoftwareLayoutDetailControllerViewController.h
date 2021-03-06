/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TISoftwareLayoutDetailControllerViewController : PSListController {

	NSString* _inputMode;

}

@property (nonatomic,copy) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(NSString *)inputMode;
-(void)setInputMode:(NSString *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setSoftwareLayout:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setShuangpinType:(id)arg1 ;
-(id)newSpecifiers;
-(id)newSpecifiersForChineseShuangpin;
-(id)newSpecifiersForChineseWubi;
-(void)setWubiStandard:(int)arg1 ;
-(void)reloadKeyboardSpecifiers;
@end

