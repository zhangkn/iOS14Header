/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldDismiss;
	BOOL _proceedShouldReturn;
	BOOL _shouldAdvanceInputMode;
	BOOL _hasDictation;
	BOOL _setMarkedText;
	BOOL _unmarkText;
	BOOL _requiresInputManagerSync;
	BOOL _shouldAdvanceResponder;
	BOOL _shouldPostReturnKeyNotification;
	NSArray* _keyboardOutputs;
	NSString* _primaryLanguage;
	NSString* _markedText;
	long long _inputModeListTouchPhase;
	double _inputModeListTouchBegan;
	long long _source;
	NSRange _selectedRange;
	CGPoint _inputModeListFromLocation;
	CGPoint _inputModeListUpdatePoint;

}

@property (nonatomic,retain) NSArray * keyboardOutputs;                         //@synthesize keyboardOutputs=_keyboardOutputs - In the implementation block
@property (assign,nonatomic) BOOL shouldDismiss;                                //@synthesize shouldDismiss=_shouldDismiss - In the implementation block
@property (assign,nonatomic) BOOL proceedShouldReturn;                          //@synthesize proceedShouldReturn=_proceedShouldReturn - In the implementation block
@property (assign,nonatomic) BOOL shouldAdvanceInputMode;                       //@synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                          //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasDictation;                                 //@synthesize hasDictation=_hasDictation - In the implementation block
@property (assign,nonatomic) BOOL setMarkedText;                                //@synthesize setMarkedText=_setMarkedText - In the implementation block
@property (nonatomic,copy) NSString * markedText;                               //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                             //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) BOOL unmarkText;                                   //@synthesize unmarkText=_unmarkText - In the implementation block
@property (assign,nonatomic) long long inputModeListTouchPhase;                 //@synthesize inputModeListTouchPhase=_inputModeListTouchPhase - In the implementation block
@property (assign,nonatomic) double inputModeListTouchBegan;                    //@synthesize inputModeListTouchBegan=_inputModeListTouchBegan - In the implementation block
@property (assign,nonatomic) CGPoint inputModeListFromLocation;                 //@synthesize inputModeListFromLocation=_inputModeListFromLocation - In the implementation block
@property (assign,nonatomic) CGPoint inputModeListUpdatePoint;                  //@synthesize inputModeListUpdatePoint=_inputModeListUpdatePoint - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL requiresInputManagerSync;                     //@synthesize requiresInputManagerSync=_requiresInputManagerSync - In the implementation block
@property (assign,nonatomic) BOOL shouldAdvanceResponder;                       //@synthesize shouldAdvanceResponder=_shouldAdvanceResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldPostReturnKeyNotification;              //@synthesize shouldPostReturnKeyNotification=_shouldPostReturnKeyNotification - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(NSString *)arg1 ;
-(NSString *)markedText;
-(void)deleteBackward;
-(BOOL)unmarkText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDictation;
-(void)setSetMarkedText:(BOOL)arg1 ;
-(BOOL)setMarkedText;
-(void)setUnmarkText:(BOOL)arg1 ;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1 ;
-(void)setProceedShouldReturn:(BOOL)arg1 ;
-(void)setHasDictation:(BOOL)arg1 ;
-(void)setShouldAdvanceInputMode:(BOOL)arg1 ;
-(void)setInputModeListTouchPhase:(long long)arg1 ;
-(void)setInputModeListTouchBegan:(double)arg1 ;
-(void)setInputModeListFromLocation:(CGPoint)arg1 ;
-(void)setInputModeListUpdatePoint:(CGPoint)arg1 ;
-(void)setShouldDismiss:(BOOL)arg1 ;
-(NSArray *)keyboardOutputs;
-(void)setKeyboardOutputs:(NSArray *)arg1 ;
-(void)_pushNewKeyboardOutput;
-(BOOL)proceedShouldReturn;
-(id)_currentKeyboardOutput;
-(BOOL)shouldAdvanceInputMode;
-(double)inputModeListTouchBegan;
-(long long)inputModeListTouchPhase;
-(CGPoint)inputModeListFromLocation;
-(CGPoint)inputModeListUpdatePoint;
-(void)setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(CGPoint)arg3 updatePoint:(CGPoint)arg4 ;
-(BOOL)requiresInputManagerSync;
-(void)setRequiresInputManagerSync:(BOOL)arg1 ;
-(BOOL)shouldAdvanceResponder;
-(void)setShouldAdvanceResponder:(BOOL)arg1 ;
-(BOOL)shouldPostReturnKeyNotification;
-(void)setShouldPostReturnKeyNotification:(BOOL)arg1 ;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)dealloc;
-(void)setSource:(long long)arg1 ;
-(BOOL)shouldDismiss;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)source;
-(id)description;
-(NSString *)primaryLanguage;
@end

