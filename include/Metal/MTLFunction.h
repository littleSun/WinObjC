//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <Metal/MetalExport.h>
#import <Foundation/NSObjCRuntime.h>

@class NSString;
@class NSArray;
@protocol MTLDevice;

typedef NS_ENUM(NSUInteger, MTLFunctionType) { MTLFunctionTypeVertex = 1, MTLFunctionTypeFragment = 2, MTLFunctionTypeKernel = 3 };

@protocol MTLFunction

@property (readonly) NSString* name;
@property (readonly) MTLFunctionType functionType;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray* vertexAttributes;

@end
