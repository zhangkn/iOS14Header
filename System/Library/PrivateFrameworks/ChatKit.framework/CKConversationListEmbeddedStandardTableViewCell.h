/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListStandardCell.h>
#import <libobjc.A.dylib/CKConversationListEmbeddedTableViewCellProtocol.h>

@class NSString;

@interface CKConversationListEmbeddedStandardTableViewCell : CKConversationListStandardCell <CKConversationListEmbeddedTableViewCellProtocol> {

	double _widthForDeterminingAvatarVisibility;
	UIEdgeInsets _marginInsets;
	CGRect _containerBounds;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                              //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePreviewSummary; 
@property (assign,nonatomic) CGRect containerBounds;                                                 //@synthesize containerBounds=_containerBounds - In the implementation block
@property (assign,nonatomic) double widthForDeterminingAvatarVisibility;                             //@synthesize widthForDeterminingAvatarVisibility=_widthForDeterminingAvatarVisibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(CGRect)containerBounds;
-(UIEdgeInsets)marginInsets;
-(void)setContainerBounds:(CGRect)arg1 ;
-(void)setWidthForDeterminingAvatarVisibility:(double)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(id)chevronImageView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

