/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PXStateBadgeView, UILabel, NSDictionary, NSString;

@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell {

	PXStateBadgeView* _stateBadgeView;
	UILabel* _agentAndStageLabel;
	UILabel* _reasonLabel;
	NSDictionary* _sectionInfo;
	NSString* _state;
	NSString* _agentAndStage;
	NSString* _reason;

}

@property (nonatomic,retain) NSDictionary * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,retain) NSString * state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * agentAndStage;                //@synthesize agentAndStage=_agentAndStage - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setState:(NSString *)arg1 ;
-(NSDictionary *)sectionInfo;
-(void)setReason:(NSString *)arg1 ;
-(void)setAgentAndStage:(NSString *)arg1 ;
-(NSString *)agentAndStage;
-(NSString *)reason;
-(NSString *)state;
-(void)setSectionInfo:(NSDictionary *)arg1 ;
@end

