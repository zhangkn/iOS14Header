/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PKPaletteTool <NSObject>
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@required
-(NSString *)toolIdentifier;
-(BOOL)isInkingTool;
-(BOOL)isErasingTool;
-(BOOL)isRulerTool;
-(BOOL)isLassoTool;
-(BOOL)isHandwritingTool;
-(id<PKPaletteInkingTool>)inkingTool;
-(id<PKPaletteErasingTool>)erasingTool;

@end
