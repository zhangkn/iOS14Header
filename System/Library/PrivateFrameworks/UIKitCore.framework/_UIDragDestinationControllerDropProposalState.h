/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewDropProposal, NSIndexPath;

@interface _UIDragDestinationControllerDropProposalState : NSObject {

	BOOL _didDrop;
	UICollectionViewDropProposal* _proposal;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) BOOL didDrop;                                         //@synthesize didDrop=_didDrop - In the implementation block
@property (nonatomic,retain) UICollectionViewDropProposal * proposal;              //@synthesize proposal=_proposal - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * effectiveIndexPath; 
-(BOOL)didDrop;
-(NSIndexPath *)indexPath;
-(BOOL)_hasDropActionTarget;
-(id)init;
-(void)setDidDrop:(BOOL)arg1 ;
-(void)didPerformDrop;
-(void)setProposal:(UICollectionViewDropProposal *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)effectiveIndexPath;
-(UICollectionViewDropProposal *)proposal;
-(id)description;
-(void)updateFromDropProposal:(id)arg1 ;
@end
