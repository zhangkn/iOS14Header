/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKTiledCanvasView, PKDrawing, UITextField, PKTextInputInteraction, PKTextInputDrawingGestureRecognizer, NSMutableArray;

@interface PKDrawingReplayController : NSObject {

	BOOL _isAnimating;
	BOOL _setupComplete;
	BOOL _cancelled;
	double _speedRatio;
	PKTiledCanvasView* _canvasView;
	PKDrawing* _drawing;
	UITextField* _textField;
	/*^block*/id _completionHandler;
	PKTextInputInteraction* _textInputInteraction;
	PKTextInputDrawingGestureRecognizer* _drawingGestureRecognizer;
	unsigned long long _currentPointIndex;
	NSMutableArray* _pointArray;
	CGPoint _startingTextFieldOrigin;
	CGPoint _originOffset;
	CGPoint _currentOffset;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) BOOL setupComplete;                                                                 //@synthesize setupComplete=_setupComplete - In the implementation block
@property (nonatomic,retain) PKTiledCanvasView * canvasView;                                                     //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                                                //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic,__weak) UITextField * textField;                                                     //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) PKTextInputInteraction * textInputInteraction;                               //@synthesize textInputInteraction=_textInputInteraction - In the implementation block
@property (assign,nonatomic,__weak) PKTextInputDrawingGestureRecognizer * drawingGestureRecognizer;              //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long currentPointIndex;                                               //@synthesize currentPointIndex=_currentPointIndex - In the implementation block
@property (assign,nonatomic) CGPoint startingTextFieldOrigin;                                                    //@synthesize startingTextFieldOrigin=_startingTextFieldOrigin - In the implementation block
@property (assign,nonatomic) CGPoint originOffset;                                                               //@synthesize originOffset=_originOffset - In the implementation block
@property (assign,nonatomic) CGPoint currentOffset;                                                              //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                                        //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) NSMutableArray * pointArray;                                                        //@synthesize pointArray=_pointArray - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                                                     //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                                   //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) double speedRatio;                                                                  //@synthesize speedRatio=_speedRatio - In the implementation block
@property (assign,nonatomic) BOOL disablePencilInput; 
+(BOOL)isDrawingInProgressForWindow:(id)arg1 ;
-(BOOL)setupComplete;
-(void)cancel;
-(void)setCancelled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(BOOL)cancelled;
-(PKDrawing *)drawing;
-(PKTiledCanvasView *)canvasView;
-(void)setCurrentOffset:(CGPoint)arg1 ;
-(BOOL)isAnimating;
-(void)setCanvasView:(PKTiledCanvasView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)setSetupComplete:(BOOL)arg1 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)currentOffset;
-(UITextField *)textField;
-(id)completionHandler;
-(CGPoint)originOffset;
-(PKTextInputDrawingGestureRecognizer *)drawingGestureRecognizer;
-(void)setDrawingGestureRecognizer:(PKTextInputDrawingGestureRecognizer *)arg1 ;
-(void)_setUpIfNecessary;
-(id)pencilTextInputInteractionFromWindowScene:(id)arg1 ;
-(void)setTextInputInteraction:(PKTextInputInteraction *)arg1 ;
-(void)_loadPointArray;
-(void)_beginDrawing;
-(PKTextInputInteraction *)textInputInteraction;
-(void)_endDrawing;
-(void)setOriginOffset:(CGPoint)arg1 ;
-(void)setStartingTextFieldOrigin:(CGPoint)arg1 ;
-(void)setCurrentPointIndex:(unsigned long long)arg1 ;
-(void)_processNextPoint;
-(void)beginDrawingAnimationAtPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)startingTextFieldOrigin;
-(NSMutableArray *)pointArray;
-(unsigned long long)currentPointIndex;
-(void)_beginStrokeWithPoint:(id)arg1 ;
-(void)_strokeMovedWithReplayPoint:(id)arg1 ;
-(void)_strokeEndedWithReplayPoint:(id)arg1 ;
-(double)speedRatio;
-(BOOL)shouldEndDrawing;
-(void)setPointArray:(NSMutableArray *)arg1 ;
-(id)initWithSourceTextField:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 transform:(CGAffineTransform)arg2 sourceTextField:(id)arg3 ;
-(void)setDisablePencilInput:(BOOL)arg1 ;
-(BOOL)disablePencilInput;
-(void)beginInsertTextAnimationAtIndex:(unsigned long long)arg1 offset:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginDrawingAnimationAtRange:(NSRange)arg1 offset:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSpeedRatio:(double)arg1 ;
@end
