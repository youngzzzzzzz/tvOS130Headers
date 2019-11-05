/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@interface WFPageRenderer : UIPrintPageRenderer {

	BOOL _matchInputSize;
	BOOL _includeMargin;
	CGSize _inputSize;

}

@property (assign,nonatomic) BOOL matchInputSize;              //@synthesize matchInputSize=_matchInputSize - In the implementation block
@property (assign,nonatomic) CGSize inputSize;                 //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) BOOL includeMargin;               //@synthesize includeMargin=_includeMargin - In the implementation block
-(CGSize)inputSize;
-(void)setInputSize:(CGSize)arg1 ;
-(CGRect)paperRect;
-(id)renderToImage;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(CGSize)arg7 shouldDrawPageAtIndexHandler:(/*^block*/id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(CGRect)printableRect;
-(BOOL)matchInputSize;
-(void)setMatchInputSize:(BOOL)arg1 ;
-(BOOL)includeMargin;
-(void)setIncludeMargin:(BOOL)arg1 ;
@end
