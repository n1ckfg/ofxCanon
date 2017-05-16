#pragma once

#include "ofxCanon.h"
#include "ofxMachineVision.h"

namespace ofxMachineVision {
	namespace Device {
		class Canon : public Updating {
		public:
			Canon();
			string getTypeName() const override;
<<<<<<< Updated upstream
			shared_ptr<Base::InitialisationSettings> getDefaultSettings() override {
=======
			shared_ptr<Base::InitialisationSettings> getDefaultSettings() const override {
>>>>>>> Stashed changes
				return make_shared<Base::InitialisationSettings>();
			}
			Specification open(shared_ptr<Base::InitialisationSettings> = nullptr) override;
			void close() override;
			void singleShot() override;

			void updateIsFrameNew() override;
			bool isFrameNew() override;
			shared_ptr<Frame> getFrame() override;

			shared_ptr<ofxCanon::Simple> getCamera();
		protected:
			int frameIndex;
			bool markFrameNew;
<<<<<<< Updated upstream
			ofxMachineVision::Microseconds openTime;
=======
			chrono::system_clock::time_point openTime;
>>>>>>> Stashed changes
			shared_ptr<ofxCanon::Simple> camera;
		};
	}
}