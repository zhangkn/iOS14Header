/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

@class NTKCFaceDetailDescriptionCell, NSString, NSMutableArray;

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController {

	NTKCFaceDetailDescriptionCell* _footerCell;
	NSString* _footer;

}

@property (nonatomic,retain) NSMutableArray * rows; 
@property (nonatomic,retain) NTKCFaceDetailDescriptionCell * footerCell;              //@synthesize footerCell=_footerCell - In the implementation block
@property (nonatomic,retain) NSString * footer;                                       //@synthesize footer=_footer - In the implementation block
-(long long)numberOfRows;
-(NSString *)footer;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(void)setSelectedOptions:(id)arg1 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(void)faceDidChange;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(void)reloadActionRow;
-(void)_setupWithCollection:(id)arg1 ;
-(NTKCFaceDetailDescriptionCell *)footerCell;
-(void)setFooterCell:(NTKCFaceDetailDescriptionCell *)arg1 ;
@end
