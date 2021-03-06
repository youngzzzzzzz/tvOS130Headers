/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <OpusMarimbaProducer/MPAssetKeyDelegate.h>

@protocol OKPresentationLookupDelegate;
@class NSString;

@interface OpusMarimbaProducer_MPAssetKeyDelegate : NSObject <MPAssetKeyDelegate> {

	id<OKPresentationLookupDelegate> _lookupDelegate;

}

@property (assign) id<OKPresentationLookupDelegate> lookupDelegate;              //@synthesize lookupDelegate=_lookupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mediaItemForAssetPath:(id)arg1 ;
-(id)urlForAssetKey:(id)arg1 ;
-(id)updatedAssetPathForAssetPath:(id)arg1 ;
-(void)setLookupDelegate:(id<OKPresentationLookupDelegate>)arg1 ;
-(id<OKPresentationLookupDelegate>)lookupDelegate;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(CGSize)resolutionForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
@end

