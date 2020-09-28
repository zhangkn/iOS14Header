/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIKeyboardCandidateListConsumer.h>

@protocol UIKeyboardCandidateListDelegate;
@class UIResponder, TIKeyboardCandidateResultSet, NSString;

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {

	UIResponder* _previousResponder;
	UIResponder* _fallbackResponder;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	long long _selectedIndex;
	BOOL _justDeleted;
	TIKeyboardCandidateResultSet* _candidateSet;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;              //@synthesize candidateSet=_candidateSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(id)nextResponder;
-(id)keyboardBehaviors;
-(BOOL)resignFirstResponder;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(unsigned long long)currentIndex;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isExtendedList;
-(unsigned long long)selectedSortIndex;
-(void)dealloc;
-(void)performOutput:(id)arg1 ;
-(id)init;
-(BOOL)isFloatingList;
-(BOOL)hasCandidates;
-(void)reloadInputViews;
-(BOOL)showCandidate:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(id)statisticsIdentifier;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)sendStrokes:(id)arg1 ;
-(void)candidateOutput:(id)arg1 ;
-(BOOL)isDeleteCandidate:(id)arg1 ;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(BOOL)shouldRestoreResponder;
-(void)candidatesUpdated;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)currentCandidate;
@end
