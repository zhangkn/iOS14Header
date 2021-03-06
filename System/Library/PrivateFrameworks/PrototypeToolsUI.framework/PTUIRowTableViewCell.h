/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/PTRowObserver.h>

@class PTRow, NSString;

@interface PTUIRowTableViewCell : UITableViewCell <PTRowObserver> {

	PTRow* _row;

}

@property (nonatomic,retain) PTRow * row;                           //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyleForRow:(id)arg1 ;
+(id)reuseIdentifierForRow:(id)arg1 ;
+(double)cellHeightForRow:(id)arg1 ;
-(PTRow *)row;
-(void)updateDisplayedValue;
-(void)prepareForReuse;
-(void)setRow:(PTRow *)arg1 ;
-(void)dealloc;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidChangeTitle:(id)arg1 ;
-(void)rowDidChangeImage:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
@end

