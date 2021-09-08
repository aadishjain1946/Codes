class PredictCovid():
    def diagnose(self, symptoms):
        cnt = 0
        for i in symptoms:
            if symptoms[i] == "fever" or symptoms[i] == "cough" or symptoms[
                    i] == "temperature":
                cnt += 1
        if cnt >= 3:
            print("patient diagnosed with covid +")
        else:
            print("patient diagnosed with covid -")


class CovidPatients(PredictCovid):
    def __init__(self, id, name, visitdate, center):
        self.id = id
        self.name = name
        self.visitdate = visitdate
        self.center = center
        self.symptoms = []

    def CollectSymptoms(self):
        self.id = int(input("Enter your ID: "))
        self.name = input("Enter your name: ")
        self.symptoms = [i for i in input("Enter symptoms: ").split(" ")]

    def showDetails(self):
        print("Patient Name: ", self.name)
        print("Patient Id: ", self.id)
        print("Patient's Symptoms: ", self.symptoms)
        self.diagnose(self.symptoms)
