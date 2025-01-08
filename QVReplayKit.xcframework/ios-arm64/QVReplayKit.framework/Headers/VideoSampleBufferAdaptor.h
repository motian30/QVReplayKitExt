//
//  VideoSampleBufferConverter.h
//  buEX
//
//  Created by sq-0523 on 2024/12/2.
//

#import <Foundation/Foundation.h>
#import <ReplayKit/ReplayKit.h>



NS_ASSUME_NONNULL_BEGIN

@interface VideoSampleBufferAdaptor : NSObject


- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer block:(void(^)(NSDictionary *))cb;

@end

NS_ASSUME_NONNULL_END
